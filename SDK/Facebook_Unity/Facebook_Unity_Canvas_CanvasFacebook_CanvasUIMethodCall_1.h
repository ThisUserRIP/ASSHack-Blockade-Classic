#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_MethodCall_1.h"
#include "Facebook_Unity_Canvas_CanvasFacebook.h"
namespace Facebook_Unity::Facebook::Unity::Canvas { struct CanvasFacebook; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct MethodArguments; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	template <typename T> struct CanvasFacebook_CanvasUIMethodCall_1 : Facebook_Unity::Facebook::Unity::MethodCall_1<T>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Facebook_Unity::Facebook::Unity::Canvas::CanvasFacebook::GetIl2CppClass(), "CanvasUIMethodCall`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		Facebook_Unity::Facebook::Unity::Canvas::CanvasFacebook* canvasImpl;
		mscorlib::System::String* callbackMethod;
		void _ctor(Facebook_Unity::Facebook::Unity::Canvas::CanvasFacebook* canvasImpl, mscorlib::System::String* methodName, mscorlib::System::String* callbackMethod)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facebook.Unity.Canvas.CanvasFacebook", "System.String", "System.String" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)canvasImpl;
			params[1] = (intptr_t)methodName;
			params[2] = (intptr_t)callbackMethod;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Call(Facebook_Unity::Facebook::Unity::MethodArguments* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Call", std::vector<std::string> { "Facebook.Unity.MethodArguments" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void UI(mscorlib::System::String* method, Facebook_Unity::Facebook::Unity::MethodArguments* args, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<T>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UI", std::vector<std::string> { "System.String", "Facebook.Unity.MethodArguments", "Facebook.Unity.FacebookDelegate`1<T>" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)method;
			params[1] = (intptr_t)args;
			params[2] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

