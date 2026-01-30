#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct AndroidJavaClass; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct GlobalJavaObjectRef; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct AndroidJavaObject; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct AndroidJavaProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaClass* javaInterface;
		intptr_t proxyObject;
		struct StaticFields
		{
			UnityEngine_AndroidJNIModule::UnityEngine::GlobalJavaObjectRef* s_JavaLangSystemClass;
			intptr_t s_HashCodeMethodID;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* javaInterface);
		void _ctor(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaClass* javaInterface);
		void Finalize();
		UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* Invoke(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* args);
		UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* Invoke(mscorlib::System::String* methodName, IL2CPP::Array<UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject*>* javaArgs);
		UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject* GetProxyObject();
		intptr_t GetRawProxy();
		static void _cctor();
	};
}

