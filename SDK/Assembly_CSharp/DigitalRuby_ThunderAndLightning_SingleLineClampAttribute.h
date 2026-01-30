#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "DigitalRuby_ThunderAndLightning_SingleLineAttribute.h"
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct SingleLineClampAttribute : Assembly_CSharp::DigitalRuby::ThunderAndLightning::SingleLineAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		double _MinValue_k__BackingField;
		double _MaxValue_k__BackingField;
		void _ctor(mscorlib::System::String* tooltip, double minValue, double maxValue);
		double get_MinValue();
		void set_MinValue(double value);
		double get_MaxValue();
		void set_MaxValue(double value);
	};
}

