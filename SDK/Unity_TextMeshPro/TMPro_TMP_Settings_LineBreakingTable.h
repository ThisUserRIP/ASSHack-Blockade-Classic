#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_Settings.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Settings; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Settings_LineBreakingTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Char>* leadingCharacters;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Char>* followingCharacters;
		void _ctor();
	};
}

