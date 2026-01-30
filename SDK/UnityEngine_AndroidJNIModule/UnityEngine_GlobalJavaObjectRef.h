#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AndroidJNIModule::UnityEngine
{
	struct GlobalJavaObjectRef : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_disposed;
		intptr_t m_jobject;
		void _ctor(intptr_t jobject);
		void Finalize();
		static intptr_t op_Implicit(UnityEngine_AndroidJNIModule::UnityEngine::GlobalJavaObjectRef* obj);
		void Dispose();
	};
}

