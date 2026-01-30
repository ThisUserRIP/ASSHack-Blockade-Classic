#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_AndroidJavaProxy.h"
namespace UnityEngine_AndroidJNIModule::UnityEngine { struct AndroidJavaRunnable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct AndroidJavaRunnableProxy : UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaProxy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaRunnable* mRunnable;
		void _ctor(UnityEngine_AndroidJNIModule::UnityEngine::AndroidJavaRunnable* runnable);
	};
}

