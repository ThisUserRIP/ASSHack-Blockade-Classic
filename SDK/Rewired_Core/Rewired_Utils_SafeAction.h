#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Action; };
#include "Rewired_Utils_SafeDelegate_1.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { template <typename T> struct Action_1; };

namespace Rewired_Core::Rewired::Utils
{
	struct SafeAction : Rewired_Core::Rewired::Utils::SafeDelegate_1<mscorlib::System::Action>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_2<mscorlib::System::Object, mscorlib::System::Action>* ogDlcwjNkeeUurPUNvUSobnPRWK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Action_1<mscorlib::System::Exception>* exceptionHandler);
		void _ctor(Rewired_Core::Rewired::Utils::SafeAction* source);
		void Invoke();
		mscorlib::System::Object* Clone();
		static mscorlib::System::Action_2<mscorlib::System::Object, mscorlib::System::Action>* BOiEgTxeHGQPSSmzxrYgmpCvFML();
		static void SoFByphuoXNGmWMeuLgtGSzkjuHv(mscorlib::System::Object* A_0, mscorlib::System::Action* A_1);
		static Rewired_Core::Rewired::Utils::SafeAction* op_Addition(Rewired_Core::Rewired::Utils::SafeAction* eventList, mscorlib::System::Action* listener);
		static Rewired_Core::Rewired::Utils::SafeAction* op_Subtraction(Rewired_Core::Rewired::Utils::SafeAction* eventList, mscorlib::System::Action* listener);
		static mscorlib::System::Action* op_Implicit(Rewired_Core::Rewired::Utils::SafeAction* obj);
		static Rewired_Core::Rewired::Utils::SafeAction* op_Implicit(mscorlib::System::Action* obj);
	};
	Rewired_Core::Rewired::Utils::SafeAction* operator+(Rewired_Core::Rewired::Utils::SafeAction& eventList, mscorlib::System::Action& listener);
	Rewired_Core::Rewired::Utils::SafeAction* operator-(Rewired_Core::Rewired::Utils::SafeAction& eventList, mscorlib::System::Action& listener);
}

