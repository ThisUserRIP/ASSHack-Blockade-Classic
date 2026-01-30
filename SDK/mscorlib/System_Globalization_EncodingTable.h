#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Globalization_InternalEncodingDataItem.h"
namespace mscorlib::System::Globalization { struct InternalEncodingDataItem; };
#include "System_Globalization_InternalCodePageDataItem.h"
namespace mscorlib::System::Globalization { struct InternalCodePageDataItem; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct String; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct CodePageDataItem; };

namespace mscorlib::System::Globalization
{
	struct EncodingTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Globalization::InternalEncodingDataItem>* encodingDataPtr;
			IL2CPP::Array<mscorlib::System::Globalization::InternalCodePageDataItem>* codePageDataPtr;
			int32_t lastEncodingItem;
			mscorlib::System::Collections::Hashtable* hashByName;
			mscorlib::System::Collections::Hashtable* hashByCodePage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t GetNumEncodingItems();
		static mscorlib::System::Globalization::InternalEncodingDataItem ENC(mscorlib::System::String* name, uint16_t cp);
		static mscorlib::System::Globalization::InternalCodePageDataItem MapCodePageDataItem(uint16_t cp, uint16_t fcp, mscorlib::System::String* names, uint32_t flags);
		static void _cctor();
		static int32_t internalGetCodePageFromName(mscorlib::System::String* name);
		static int32_t GetCodePageFromName(mscorlib::System::String* name);
		static mscorlib::System::Globalization::CodePageDataItem* GetCodePageDataItem(int32_t codepage);
	};
}

