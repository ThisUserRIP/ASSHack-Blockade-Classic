#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_AndroidJavaObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct AndroidJavaClass : UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* className);
		void _AndroidJavaClass(mscorlib::System::String* className);
		void _ctor(intptr_t jclass);
	};
}

