#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_MaskedTextProvider.h"
namespace System::System::ComponentModel { struct MaskedTextProvider; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_ComponentModel_MaskedTextProvider_CaseConversion.h"
#include "System_ComponentModel_MaskedTextProvider_CharType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace System::System::ComponentModel
{
	struct MaskedTextProvider_CharDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t MaskPosition;
		System::ComponentModel::MaskedTextProvider_CaseConversion CaseConversion;
		System::ComponentModel::MaskedTextProvider_CharType CharType;
		bool IsAssigned;
		void _ctor(int32_t maskPos, System::ComponentModel::MaskedTextProvider_CharType charType);
		mscorlib::System::String* ToString();
	};
}

