#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerTemplate_lImtnhPnCZeoowQDtJYmrKHIbLP.h"
#include "Rewired_ControllerTemplate.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate; };
namespace Rewired_Core { struct TRPKZqgoeeqwqIpWIsatQOCvNSY; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerTemplateElementType.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxisSource; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired { struct IControllerTemplateButtonSource; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElementSource; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
#include "Rewired_ControllerTemplateElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementTarget; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_xImNodUwBLNFcteRAfnptqFHaMnf : Rewired_Core::Rewired::ControllerTemplate_lImtnhPnCZeoowQDtJYmrKHIbLP
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* MkgUeZKDHAGnxmbUifeYxUdzWtg;
		mscorlib::System::String* qCIccFkcqRGHJhiWwCkGuxoPeop;
		mscorlib::System::String* gYInFtFPSWDkGTVJrDdvrKgZvZa;
		void _ctor(Rewired_Core::Rewired::IControllerTemplate* parent, int32_t id, mscorlib::System::String* name, mscorlib::System::String* positiveName, mscorlib::System::String* negativeName, Rewired_Core::Rewired::ControllerTemplateElementType elementType, Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* target, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplate_SydusAsAzaGnyfyrOCOMvZjnHPV>* sourceElements);
		float get_floatValue();
		float get_floatValuePrev();
		bool get_boolValue();
		bool get_boolValuePrev();
		mscorlib::System::String* Rewired_IControllerTemplateAxis_get_positiveDescriptiveName();
		mscorlib::System::String* Rewired_IControllerTemplateAxis_get_negativeDescriptiveName();
		float Rewired_IControllerTemplateAxis_get_value();
		float Rewired_IControllerTemplateAxis_get_valuePrev();
		Rewired_Core::Rewired::IControllerTemplateAxisSource* Rewired_IControllerTemplateAxis_get_source();
		mscorlib::System::String* Rewired_IControllerTemplateAxis_GetDescriptiveName(Rewired_Core::Rewired::AxisRange A_1);
		bool Rewired_IControllerTemplateButton_get_value();
		bool Rewired_IControllerTemplateButton_get_valuePrev();
		bool Rewired_IControllerTemplateButton_get_justPressed();
		bool Rewired_IControllerTemplateButton_get_justReleased();
		bool Rewired_IControllerTemplateButton_get_justChangedState();
		float Rewired_IControllerTemplateButton_get_pressure();
		float Rewired_IControllerTemplateButton_get_pressurePrev();
		Rewired_Core::Rewired::IControllerTemplateButtonSource* Rewired_IControllerTemplateButton_get_source();
		Rewired_Core::Rewired::IControllerTemplateElementSource* get_source();
		int32_t get_elementCount();
		Rewired_Core::Rewired::IControllerTemplateElement* GetElement(int32_t A_1);
		int32_t GetElementTargets(Rewired_Core::Rewired::ControllerElementTarget A_1, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>& A_2);
		Rewired_Core::Rewired::IControllerTemplateAxis* get_AsAxis();
		Rewired_Core::Rewired::IControllerTemplateButton* get_AsButton();
		static bool ZlHyNCxXrJwxUgmaxNTXKFqHibc(Rewired_Core::Rewired::ControllerElementTarget A_0, Rewired_Core::Rewired::IControllerElementTarget* A_1);
	};
}

