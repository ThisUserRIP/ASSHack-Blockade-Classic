#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_TextMeshPro::TMPro { struct KerningPair; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "TMPro_GlyphValueRecord_Legacy.h"
namespace Unity_TextMeshPro::TMPro { struct GlyphValueRecord_Legacy; };

namespace Unity_TextMeshPro::TMPro
{
	struct KerningTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::KerningPair>* kerningPairs;
		void _ctor();
		void AddKerningPair();
		int32_t AddKerningPair(uint32_t first, uint32_t second, float offset);
		int32_t AddGlyphPairAdjustmentRecord(uint32_t first, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy firstAdjustments, uint32_t second, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy secondAdjustments);
		void RemoveKerningPair(int32_t left, int32_t right);
		void RemoveKerningPair(int32_t index);
		void SortKerningPairs();
	};
}

