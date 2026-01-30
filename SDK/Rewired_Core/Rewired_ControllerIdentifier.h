#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Controller; };

namespace Rewired_Core::Rewired
{
	struct ControllerIdentifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t CvbQaJoobigmAGNWGnAzDUbEQcN;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		mscorlib::System::Guid hDawOIOjFdUihGVVhSZJFEMtFLH;
		mscorlib::System::String* dtwuSjetiKRQPPejbzbARDqlAod;
		mscorlib::System::Guid kMJFEtEDbfKwJXQomMsscAdkpDQP;
		void _ctor(Rewired_Core::Rewired::Controller* controller);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		mscorlib::System::Guid get_hardwareTypeGuid();
		void set_hardwareTypeGuid(mscorlib::System::Guid value);
		mscorlib::System::String* get_hardwareIdentifier();
		void set_hardwareIdentifier(mscorlib::System::String* value);
		mscorlib::System::Guid get_deviceInstanceGuid();
		void set_deviceInstanceGuid(mscorlib::System::Guid value);
		static Rewired_Core::Rewired::ControllerIdentifier get_Blank();
	};
}

