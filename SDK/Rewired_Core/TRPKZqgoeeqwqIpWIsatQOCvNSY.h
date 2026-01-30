#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerTemplateElementType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerTemplateElementSourceType.h"

namespace Rewired_Core
{
	struct TRPKZqgoeeqwqIpWIsatQOCvNSY : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerTemplateElementType NbtEZDJvBiguNErVBFZTyKkBnFrm;
		bool oCywnexOjORFtZHcOIUEhfeKrihE;
		Rewired_Core::Rewired::IControllerElementTarget* MkgUeZKDHAGnxmbUifeYxUdzWtg;
		Rewired_Core::Rewired::IControllerElementTarget* VVXAdDNkEVjctAlSgNEhTPSOVKCt;
		Rewired_Core::Rewired::IControllerElementTarget* YGnZKUKgHLFFieNQCiqKpGgOoidU;
		void _ctor(Rewired_Core::Rewired::ControllerTemplateElementType elementType, bool splitAxis, Rewired_Core::Rewired::IControllerElementTarget* target, Rewired_Core::Rewired::IControllerElementTarget* positiveTarget, Rewired_Core::Rewired::IControllerElementTarget* negativeTarget);
		Rewired_Core::Rewired::ControllerTemplateElementSourceType Rewired_IControllerTemplateElementSource_get_type();
		bool Rewired_IControllerTemplateAxisSource_get_splitAxis();
		Rewired_Core::Rewired::IControllerElementTarget* Rewired_IControllerTemplateAxisSource_get_fullTarget();
		Rewired_Core::Rewired::IControllerElementTarget* Rewired_IControllerTemplateAxisSource_get_positiveTarget();
		Rewired_Core::Rewired::IControllerElementTarget* Rewired_IControllerTemplateAxisSource_get_negativeTarget();
		Rewired_Core::Rewired::IControllerElementTarget* Rewired_IControllerTemplateButtonSource_get_target();
		static Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* twJJKosqyrSZiCjABgFSjvrNDCq(Rewired_Core::Rewired::ControllerTemplateElementType A_0);
	};
}

