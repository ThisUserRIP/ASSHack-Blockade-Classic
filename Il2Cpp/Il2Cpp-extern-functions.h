#pragma once
#include "il2cpp-types.h"
//#include "..\\SDK\mscorlib\System_String.h"
using namespace IL2CPP;

#define DO_API(r, n, p) extern r (*n) p
#include "il2cpp-api-functions.h"
#undef DO_API

#include <vector>
#include <string>

#include "..\\SDK\mscorlib\System_Type.h"

void Il2Cpp_init();
const IL2CPP::MethodInfo* GetIl2CppMethod(Il2CppClass* klass, const char* name, std::vector<std::string> args);
const IL2CPP::MethodInfo* GetIl2CppMethod(Il2CppClass* klass, const char* name);
IL2CPP::Il2CppClass* GetIL2CppClass(const char* image, const char* namezpacem, const char* Class);
IL2CPP::Il2CppClass* GetIl2CppNestedType(Il2CppClass* klass, const char* nestedTypeName);
void Il2CppExceptionMessage(IL2CPP::Il2CppException* exception);
std::string GetTypeName(void* vtype);

inline std::vector<const IL2CPP::Il2CppImage*> images;
inline size_t size_images;

template <typename T> IL2CPP::Array<T*>* MakeArray(size_t size) {
    return (Array<T*>*)il2cpp_array_new(T::GetIl2CppClass(), size);
}

template <typename T> std::string GetGenericTypeName()
{
    return GetTypeName(T::GetIl2CppType());
}

template <typename T> T* GetGenericValue(IL2CPP::Il2CppObject* object) {
    T* result = nullptr;

    if (object != nullptr) {
        if (il2cpp_class_is_valuetype(T::GetIl2CppClass())) result = (T*)il2cpp_object_unbox(object);
        else result = (T*)object;
    }

    return result;
}