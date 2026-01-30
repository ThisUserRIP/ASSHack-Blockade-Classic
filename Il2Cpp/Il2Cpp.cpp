#include <windows.h>
#pragma comment(lib, "psapi.Lib")
#include "dlfcn.h"

#include "..\\SDK\mscorlib\System_Type.h"
#include "..\\SDK\mscorlib\System_String.h"
#include "..\\SDK\mscorlib\System_Object.h"

#include "Il2Cpp-extern-functions.h"
#include <iostream>

#define DO_API(r, n, p) r (*n) p
#include "il2cpp-api-functions.h"
#undef DO_API

void Il2Cpp_init() 
{
    while (!il2cpp_domain_get) 
    {
        HMODULE baseAddress = GetModuleHandleW(L"GameAssembly.dll");

        if ((int)baseAddress != 0) 
        {
#define DO_API(r, n, p) n = (r (*) p)dlsym(baseAddress, #n)
#include "il2cpp-api-functions.h"

#undef DO_API
        }
    }

    auto domain = il2cpp_domain_get();
    auto assemblies = il2cpp_domain_get_assemblies(domain, &size_images);

    std::vector<const IL2CPP::Il2CppImage*> imagess(size_images);
    for (int i = 0; i < size_images; ++i)
    {
        imagess[i] = il2cpp_assembly_get_image(assemblies[i]);
    }

    images = imagess;
}

const IL2CPP::MethodInfo* GetIl2CppMethod(Il2CppClass* klass, const char* name, std::vector<std::string> args) {
    if (klass == nullptr) {
        std::string str = "Class = null\n";
        str += "Method = " + std::string(name) + "\n";
        str += "Args: ";
        for (int i = 0; i < args.size(); i++) {
            if (i > 0)
                str += ",";
            str += args[i];
        }
        //OutputDebugStringA(str.c_str());
        std::wstring ws(str.length(), L' ');
        std::copy(str.begin(), str.end(), ws.begin());
        MessageBox(0, ws.c_str(), L"Error GetMethod", MB_OK);
        return nullptr;
    }

    void* tier = nullptr;
    const IL2CPP::MethodInfo* method = nullptr;

    while ((method = il2cpp_class_get_methods(klass, &tier)) != nullptr) {

        if (std::strcmp(name, method->name) != 0)
            continue;

        if (method->parameters_count != args.size())
            continue;
        bool isOtherMethod = false;

        for (int i = 0; i < args.size(); i++) {
            auto type_name = il2cpp_type_get_name(method->parameters[i].parameter_type);
            const char* name_arg = args[i].c_str();
            if (std::strcmp(name_arg, type_name) != 0)
                isOtherMethod = true;
        }

        if (isOtherMethod) 
            continue;

        return method;
    }

    std::string methodSignature = name;
    methodSignature += "(";
    for (int i = 0; i < args.size(); i++) {
        if (i > 0)
        {
            methodSignature += ",";
        }
        methodSignature += args[i];
    }
    methodSignature += ")";

    tier = nullptr;
    while ((method = il2cpp_class_get_methods(klass, &tier)) != nullptr) 
    {
        std::string name = method->name;
        name += "(";
        for (int i = 0; i < method->parameters_count; i++) 
        {
            if (i > 0) {
                name += ", ";
            }
            auto typeName = GetTypeName(mscorlib::System::Type::internal_from_handle((intptr_t)method->parameters[i].parameter_type));
            name += typeName;
        }
        name += ")";
        std::cout << name << " != " << methodSignature << "\n";
    }

    method = nullptr;
    std::string str_ = name;
    std::string str = "Method: " + str_;
    std::string str4 = klass->name;
    std::string str3 = "\nClass: " + str4;
    std::string str2 = "\nArgs: ";
    for (int i = 0; i < args.size(); i++) {
        if (i > 0)
            str2 += ",";
        str2 += args[i];
    }
    str += str3 + str2;
    //OutputDebugStringA(str.c_str());
    std::wstring ws(str.length(), L' ');
    std::copy(str.begin(), str.end(), ws.begin());
    MessageBox(0, ws.c_str(), L"Error GetMethod", MB_OK);

    return method;
}

const IL2CPP::MethodInfo* GetIl2CppMethod(Il2CppClass* klass, const char* name) {
    if (klass == nullptr) {
        std::string str = "Class = null\n";
        std::string str2 = str + "Method: " + name;
        //std::cout << str2.c_str();
        //OutputDebugStringA();
        std::wstring ws(str2.length(), L' ');
        std::copy(str2.begin(), str2.end(), ws.begin());
        MessageBox(0, ws.c_str(), L"Error GetMethod", MB_OK);
        return nullptr;
    }
    void* tier = nullptr;
    const IL2CPP::MethodInfo* method = nullptr;
    int methodsCount = 0;
    while ((method = il2cpp_class_get_methods(klass, &tier)) != nullptr) 
    {
        if (std::strcmp(name, method->name) != 0)
            continue;

        if (method->parameters_count == 0) {
            return method;
        }
    }
    std::string str_ = name;
    std::string str = "Method: " + str_;
    std::string str4 = klass->name;
    std::string str3 = str + "\nClass: " + str4;
    //OutputDebugStringA(str3.c_str());
    std::wstring ws(str3.length(), L' ');
    std::copy(str3.begin(), str3.end(), ws.begin());
    MessageBox(0, ws.c_str(), L"Error GetMethod", MB_OK);

    return nullptr;
}

IL2CPP::Il2CppClass* GetIL2CppClass(const char* image, const char* namezpace, const char* Class) {
    for (int i = 0; i < size_images; i++) {
        if (std::strcmp(image, images[i]->name) != 0)
            continue;   

        return il2cpp_class_from_name(images[i], namezpace, Class);
    }
    std::string str = image;
    std::string str2 = namezpace;
    std::string str3 = Class;
    std::string str4 = "Unable find image: " + str;
    //std::cout << str4.c_str();
    std::wstring ws(str4.length(), L' ');
    std::copy(str4.begin(), str4.end(), ws.begin());
    MessageBox(0, ws.c_str(), L"Error GetClass", MB_OK);
    return nullptr;
}

IL2CPP::Il2CppClass* GetIl2CppNestedType(Il2CppClass* klass, const char* nestedTypeName)
{
    if (klass == nullptr) 
    {
        std::string str = "Ñlass = null\n";
        std::string str2 = str + "Nested type name: " + nestedTypeName;
        std::wstring ws(str2.length(), L' ');
        std::copy(str2.begin(), str2.end(), ws.begin());
        MessageBox(0, ws.c_str(), L"Error GetNestedType", MB_OK);
        return nullptr;
    }

    if (il2cpp_class_is_inflated(klass))
    {
        mscorlib::System::Type* type = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(klass));
        mscorlib::System::Reflection::BindingFlags flags = (mscorlib::System::Reflection::BindingFlags)((int)mscorlib::System::Reflection::BindingFlags::Public | (int)mscorlib::System::Reflection::BindingFlags::NonPublic);
        mscorlib::System::Type* nestedType = type->GetNestedType((mscorlib::System::String*)il2cpp_string_new(nestedTypeName), flags);
        if (nestedType != nullptr) 
        {
            IL2CPP::Il2CppClass* nestedType2 = il2cpp_class_from_type((const IL2CPP::Il2CppType*)nestedType->get_TypeHandle().value);
            return nestedType2;
        }
    }
    void* ptr = nullptr;
    IL2CPP::Il2CppClass* nestedType;
    while ((nestedType = il2cpp_class_get_nested_types(klass, &ptr)) != nullptr)
    {
        std::cout << nestedType->name;
        if (std::strcmp(nestedTypeName, nestedType->name) != 0)
            continue;

        return nestedType;
    exit:
        continue;
    }
    std::string str = std::string("Class name: ") + klass->name + std::string("\nNested type name: " + std::string(nestedTypeName));
    MessageBoxA(0, str.c_str(), "Error GetNestedType", MB_OK);
    return nullptr;
}

std::string GetTypeName(void* vtype)
{
    mscorlib::System::Type* type = (mscorlib::System::Type*)vtype;
    std::string result = "";
    if (type->get_IsArray()) 
    {
        result = GetTypeName(type->GetElementType()) + "[]";
    }
    else if (type->get_IsByRef())
    {
        result = GetTypeName(type->GetElementType()) + "&";
    }
    else if (type->get_IsPointer())
    {
        result = GetTypeName(type->GetElementType()) + "*";
    }
    else if (type->get_IsGenericParameter())
    {
        std::wstring ws = (wchar_t*)((Il2CppString*)(type->get_Name()))->chars;
        result = std::string(ws.begin(), ws.end());
    }
    else 
    {
        std::wstring ws = (wchar_t*)((Il2CppString*)(type->get_FullName()))->chars;
        result = std::string(ws.begin(), ws.end());
    }
    //std::cout << result + "\n";
    return result;
}

static char* bytesMessage;
static const char* ErrorMessage;

void Il2CppExceptionMessage(IL2CPP::Il2CppException* exception) {
    if (exception == nullptr) return;

    if (bytesMessage == nullptr) bytesMessage = new char[65536];
    char* message = nullptr;
    char* array = nullptr;
    if ((array = bytesMessage) == nullptr) message = nullptr;
    else message = &array[0];

    il2cpp_format_exception(exception, message, 65536);
    std::string text = message;
    array = nullptr;
    char* output = nullptr;
    if ((array = bytesMessage) == nullptr) output = nullptr;
    else output = &array[0];

    il2cpp_format_stack_trace(exception, output, 65536);
    text = text + "\n" + (std::string)output;
    ErrorMessage = text.c_str();
    OutputDebugStringA(ErrorMessage);
    std::cout << "Exception: " << text;
    return;
}