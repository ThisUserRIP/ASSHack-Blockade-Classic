#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System { struct Int16; };
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct UInt16; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int32.h"
#include "System_Byte.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Text_NormalizationCheck.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Text_NormalizationForm.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct IntPtr; };

namespace mscorlib::System::Text
{
	struct Normalization : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint8_t* props;
			int32_t* mappedChars;
			int16_t* charMapIndex;
			int16_t* helperIndex;
			uint16_t* mapIdxToComposite;
			uint8_t* combiningClass;
			mscorlib::System::Object* forLock;
			bool isReady;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint32_t PropValue(int32_t cp);
		static int32_t CharMapIdx(int32_t cp);
		static uint8_t GetCombiningClass(int32_t c);
		static int32_t GetPrimaryCompositeFromMapIndex(int32_t src);
		static int32_t GetPrimaryCompositeHelperIndex(int32_t cp);
		static mscorlib::System::String* Compose(mscorlib::System::String* source, int32_t checkType);
		static mscorlib::System::Text::StringBuilder* Combine(mscorlib::System::String* source, int32_t start, int32_t checkType);
		static void Combine(mscorlib::System::Text::StringBuilder* sb, int32_t i, int32_t checkType);
		static int32_t CombineHangul(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::String* s, int32_t current);
		static int32_t Fetch(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::String* s, int32_t i);
		static int32_t TryComposeWithPreviousStarter(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::String* s, int32_t current);
		static int32_t TryCompose(int32_t i, int32_t starter, int32_t candidate);
		static mscorlib::System::String* Decompose(mscorlib::System::String* source, int32_t checkType);
		static void Decompose(mscorlib::System::String* source, mscorlib::System::Text::StringBuilder& sb, int32_t checkType);
		static void ReorderCanonical(mscorlib::System::String* src, mscorlib::System::Text::StringBuilder& sb, int32_t start);
		static void DecomposeChar(mscorlib::System::Text::StringBuilder& sb, IL2CPP::Array<int32_t>& buf, mscorlib::System::String* s, int32_t i, int32_t checkType, int32_t& start);
		static mscorlib::System::Text::NormalizationCheck QuickCheck(wchar_t c, int32_t type);
		static int32_t GetCanonicalHangul(int32_t s, IL2CPP::Array<int32_t>* buf, int32_t bufIdx);
		static int32_t GetCanonical(int32_t c, IL2CPP::Array<int32_t>* buf, int32_t bufIdx, int32_t checkType);
		static mscorlib::System::String* Normalize(mscorlib::System::String* source, mscorlib::System::Text::NormalizationForm normalizationForm);
		static mscorlib::System::String* Normalize(mscorlib::System::String* source, int32_t type);
		static void load_normalization_resource(intptr_t& props, intptr_t& mappedChars, intptr_t& charMapIndex, intptr_t& helperIndex, intptr_t& mapIdxToComposite, intptr_t& combiningClass);
		static void _cctor();
	};
}

