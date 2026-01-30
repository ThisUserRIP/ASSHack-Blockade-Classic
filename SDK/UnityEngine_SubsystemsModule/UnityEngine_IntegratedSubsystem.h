#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_SubsystemsModule::UnityEngine { struct ISubsystemDescriptor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_SubsystemsModule::UnityEngine
{
	struct IntegratedSubsystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		UnityEngine_SubsystemsModule::UnityEngine::ISubsystemDescriptor* m_SubsystemDescriptor;
		void SetHandle(UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem* subsystem);
		bool get_running();
		bool get_valid();
		bool IsRunning();
		void _ctor();
	};
}

