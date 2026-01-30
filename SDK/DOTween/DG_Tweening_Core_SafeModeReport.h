#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "DG_Tweening_Core_SafeModeReport_SafeModeReportType.h"

namespace DOTween::DG::Tweening::Core
{
	struct SafeModeReport
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _totMissingTargetOrFieldErrors_k__BackingField;
		int32_t _totCallbackErrors_k__BackingField;
		int32_t _totStartupErrors_k__BackingField;
		int32_t _totUnsetErrors_k__BackingField;
		int32_t get_totMissingTargetOrFieldErrors();
		void set_totMissingTargetOrFieldErrors(int32_t value);
		int32_t get_totCallbackErrors();
		void set_totCallbackErrors(int32_t value);
		int32_t get_totStartupErrors();
		void set_totStartupErrors(int32_t value);
		int32_t get_totUnsetErrors();
		void set_totUnsetErrors(int32_t value);
		void Add(DOTween::DG::Tweening::Core::SafeModeReport_SafeModeReportType type);
		int32_t GetTotErrors();
	};
}

