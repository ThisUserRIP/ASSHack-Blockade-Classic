#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_TextMeshPro::TMPro { struct TMP_GlyphPairAdjustmentRecord; };

namespace Unity_TextMeshPro::TMPro
{
	struct GlyphPairKey
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t firstGlyphIndex;
		uint32_t secondGlyphIndex;
		uint32_t key;
		void _ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex);
		void _ctor(Unity_TextMeshPro::TMPro::TMP_GlyphPairAdjustmentRecord* record);
	};
}

