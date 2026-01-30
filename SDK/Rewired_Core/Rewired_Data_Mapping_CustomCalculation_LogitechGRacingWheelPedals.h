#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_CustomCalculation.h"
#include "Rewired_Utils_Classes_Data_TypeWrapper_DataType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_Data_Mapping_CustomCalculation_LogitechGRacingWheelPedals_Mode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct CustomCalculation_LogitechGRacingWheelPedals : Rewired_Core::Rewired::Data::Mapping::CustomCalculation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::CustomCalculation_LogitechGRacingWheelPedals_Mode ePVcHREIEKCEtvrlEBamHyVBCjxi;
		struct StaticFields
		{
			Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper_DataType resultType;
			float dead;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType();
		bool Process();
		float nvZFZaRgjbGmcezpVaQUrMOFHObd();
		void osmAxrmUmDtmyDFitKCipbHmsdA(float A_1, float A_2);
		void _ctor();
	};
}

