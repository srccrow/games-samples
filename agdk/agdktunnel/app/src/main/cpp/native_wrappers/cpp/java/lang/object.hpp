/*
 * Copyright 2023 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// This file was generated using the Library Wrapper tool
// https://developer.android.com/games/develop/custom/wrapper

#ifndef CPP_JAVA_LANG_OBJECT
#define CPP_JAVA_LANG_OBJECT

#include <memory>
#include "gni/common/scoped_local_ref.h"
#include "gni/gni.hpp"
#include "gni/object.hpp"
#include "java/lang/string.hpp"

namespace java {
namespace lang {

class Object : virtual public ::gni::Object
{
public:
    static jclass GetClass();
    static void destroy(const Object* object);
    explicit Object(jobject object) : ::gni::Object(object) {}
    ~Object() override = default;
    virtual ::java::lang::String& toString() const;
};

}  // namespace lang
}  // namespace java

#endif  // CPP_JAVA_LANG_OBJECT

