#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct GlobalJavaObjectRef; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct AndroidReflection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_AndroidJNIModule::UnityEngine::GlobalJavaObjectRef* s_ReflectionHelperClass;
			intptr_t s_ReflectionHelperGetConstructorID;
			intptr_t s_ReflectionHelperGetMethodID;
			intptr_t s_ReflectionHelperGetFieldID;
			intptr_t s_ReflectionHelperGetFieldSignature;
			intptr_t s_ReflectionHelperNewProxyInstance;
			intptr_t s_ReflectionHelperSetNativeExceptionOnProxy;
			intptr_t s_FieldGetDeclaringClass;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool IsPrimitive(mscorlib::System::Type* t);
		static bool IsAssignableFrom(mscorlib::System::Type* t, mscorlib::System::Type* from);
		static intptr_t GetStaticMethodID(mscorlib::System::String* clazz, mscorlib::System::String* methodName, mscorlib::System::String* signature);
		static intptr_t GetMethodID(mscorlib::System::String* clazz, mscorlib::System::String* methodName, mscorlib::System::String* signature);
		static intptr_t GetConstructorMember(intptr_t jclass, mscorlib::System::String* signature);
		static intptr_t GetMethodMember(intptr_t jclass, mscorlib::System::String* methodName, mscorlib::System::String* signature, bool isStatic);
		static intptr_t GetFieldMember(intptr_t jclass, mscorlib::System::String* fieldName, mscorlib::System::String* signature, bool isStatic);
		static intptr_t GetFieldClass(intptr_t field);
		static mscorlib::System::String* GetFieldSignature(intptr_t field);
		static intptr_t NewProxyInstance(intptr_t delegateHandle, intptr_t interfaze);
		static void SetNativeExceptionOnProxy(intptr_t proxy, mscorlib::System::Exception* e, bool methodNotFound);
		static void _cctor();
	};
}

