// Copyright 2015 Samsung Electronics Co, Ltd. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef WRT_RUNTIME_RUNTIME_H_
#define WRT_RUNTIME_RUNTIME_H_

#include <app.h>
#include <string>

#include "runtime/native_window.h"
#include "runtime/web_application.h"

namespace wrt {

class Runtime {
 public:
  Runtime();
  virtual ~Runtime();

  virtual int Exec(int argc, char* argv[]);

 protected:
  virtual bool OnCreate();
  virtual void OnTerminate();
  virtual void OnPause();
  virtual void OnResume();
  virtual void OnAppControl(app_control_h app_control);
  virtual void OnLanguageChanged(const std::string& language);

 private:
  WebApplication* application_;
  NativeWindow* native_window_;
};

}  // namespace wrt

#endif  // WRT_RUNTIME_RUNTIME_H_
