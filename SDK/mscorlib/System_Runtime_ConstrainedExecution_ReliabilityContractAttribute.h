#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Runtime_ConstrainedExecution_Consistency.h"
#include "System_Runtime_ConstrainedExecution_Cer.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::ConstrainedExecution
{
	struct ReliabilityContractAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::ConstrainedExecution::Consistency _consistency;
		mscorlib::System::Runtime::ConstrainedExecution::Cer _cer;
		void _ctor(mscorlib::System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee, mscorlib::System::Runtime::ConstrainedExecution::Cer cer);
	};
}

