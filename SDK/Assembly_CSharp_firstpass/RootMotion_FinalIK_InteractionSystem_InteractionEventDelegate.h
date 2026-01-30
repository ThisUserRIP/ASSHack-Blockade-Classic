#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "RootMotion_FinalIK_InteractionSystem.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject_InteractionEvent; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionSystem_InteractionEventDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_InteractionEvent* interactionEvent);
		mscorlib::System::IAsyncResult* BeginInvoke(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_InteractionEvent* interactionEvent, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

