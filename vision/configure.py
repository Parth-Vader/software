#!/usr/bin/python
from build import ninja_common
import os

build = ninja_common.Build('vision')

build.install('auv-vision-gui', f='vision/gui/server.py')

build.build_shared('auv-camera-message-framework', ['c/camera_message_framework.cpp'], deps=['pthread'], auv_deps=['utils'])
build.build_shared('auv-camera-filters', ['c/camera_filters.cpp'], pkg_confs=['opencv'], auv_deps=['utils'])

build.build_cmd('auv-firewire-daemon', ['c/firewire_camera.cpp'], deps=['dc1394'], auv_deps=['auv-camera-message-framework'], pkg_confs=['opencv'])

build.build_cmd('auv-cams', ['gui/cams/cams.cpp'], pkg_confs=['opencv'], auv_deps=['auv-camera-message-framework'])

build.install('auv-start-cameras', f='vision/camera_manager.py')

build.install('auv-webcam-camera', f='vision/capture_sources/GenericVideoCapture.py')
build.install('auv-video-camera', f='vision/capture_sources/Video.py')
build.install('auv-dfk-camera', f='vision/capture_sources/DFK23U445.py')

camera_apis = { "ueye.h" : ("ueye", "UeyeCamera.cpp", "ueye_api"),
                "m3api/xiApi.h" : ("ximea", "XimeaCamera.cpp", "m3api")
              }

for incl, (name, src, lib) in camera_apis.items():
  include_full_path = os.path.join("/usr/include", incl)
  if os.path.isfile(include_full_path):
    build.build_cmd("auv-%s-camera" % name,
                    ["c/camera_mainmaker.cpp", "c/%s" % src],
                    deps=[lib], pkg_confs=['opencv'],
                    auv_deps=['utils', 'auv-camera-message-framework',
                    'auv-camera-filters', 'shm'])

  else:
    print("Could not build capture source for \"%s\" camera because you are missing \"%s\"." % (name, include_full_path))
