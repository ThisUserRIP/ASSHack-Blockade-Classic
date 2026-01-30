#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxisSource; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };

namespace Rewired_Core::Rewired
{
	struct IControllerTemplateAxis
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_positiveDescriptiveName();
		mscorlib::System::String* get_negativeDescriptiveName();
		mscorlib::System::String* GetDescriptiveName(Rewired_Core::Rewired::AxisRange axisRange);
		float get_value();
		float get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateAxisSource* get_source();
		Rewired_Core::Rewired::IControllerTemplateButton* get_AsButton();
	};
}

