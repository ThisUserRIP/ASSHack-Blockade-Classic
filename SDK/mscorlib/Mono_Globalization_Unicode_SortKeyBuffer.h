#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Globalization_CompareOptions.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct SortKey; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct SortKeyBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* l1b;
		IL2CPP::Array<uint8_t>* l2b;
		IL2CPP::Array<uint8_t>* l3b;
		IL2CPP::Array<uint8_t>* l4sb;
		IL2CPP::Array<uint8_t>* l4tb;
		IL2CPP::Array<uint8_t>* l4kb;
		IL2CPP::Array<uint8_t>* l4wb;
		IL2CPP::Array<uint8_t>* l5b;
		mscorlib::System::String* source;
		int32_t l1;
		int32_t l2;
		int32_t l3;
		int32_t l4s;
		int32_t l4t;
		int32_t l4k;
		int32_t l4w;
		int32_t l5;
		int32_t lcid;
		mscorlib::System::Globalization::CompareOptions options;
		bool processLevel2;
		bool frenchSort;
		bool frenchSorted;
		void _ctor(int32_t lcid);
		void Reset();
		void Initialize(mscorlib::System::Globalization::CompareOptions options, int32_t lcid, mscorlib::System::String* s, bool frenchSort);
		void AppendCJKExtension(uint8_t lv1msb, uint8_t lv1lsb);
		void AppendKana(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth);
		void AppendNormal(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3);
		void AppendLevel5(uint8_t category, uint8_t lv1);
		void AppendBufferPrimitive(uint8_t value, IL2CPP::Array<uint8_t>& buf, int32_t& bidx);
		mscorlib::System::Globalization::SortKey* GetResultAndReset();
		int32_t GetOptimizedLength(IL2CPP::Array<uint8_t>* data, int32_t len, uint8_t defaultValue);
		mscorlib::System::Globalization::SortKey* GetResult();
	};
}

