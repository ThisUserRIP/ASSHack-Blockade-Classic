#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_CustomCalculation.h"
#include "Rewired_Data_Mapping_CustomCalculation_Accelerometer_CalculationType.h"
#include "Rewired_Data_Mapping_CustomCalculation_Accelerometer_InputType.h"
#include "Rewired_Data_Mapping_CustomCalculation_Accelerometer_OutputType.h"
#include "Rewired_Utils_Classes_Data_TypeWrapper_DataType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct CustomCalculation_Accelerometer : Rewired_Core::Rewired::Data::Mapping::CustomCalculation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::CustomCalculation_Accelerometer_CalculationType _calculationType;
		Rewired_Core::Rewired::Data::Mapping::CustomCalculation_Accelerometer_InputType _inputType;
		Rewired_Core::Rewired::Data::Mapping::CustomCalculation_Accelerometer_OutputType _outputType;
		Rewired_Core::Rewired::Utils::Classes::Data::TypeWrapper_DataType get_ResultType();
		bool Process();
		float iffQXNXUFgslCSVFaFPXrBQsOKC();
		float QdnWLthWitBSolqBmsVnhKFwahIj();
		float cAKWJoveNjKaBVpdbrmxzLcRQoo(float A_1);
		void _ctor();
	};
}

