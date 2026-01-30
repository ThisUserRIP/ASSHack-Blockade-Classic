#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct CodePageDataItem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_dataIndex;
		int32_t m_uiFamilyCodePage;
		mscorlib::System::String* m_webName;
		mscorlib::System::String* m_headerName;
		mscorlib::System::String* m_bodyName;
		uint32_t m_flags;
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* sep;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t dataIndex);
		static mscorlib::System::String* CreateString(mscorlib::System::String* pStrings, uint32_t index);
		mscorlib::System::String* get_WebName();
		int32_t get_UIFamilyCodePage();
		mscorlib::System::String* get_HeaderName();
		mscorlib::System::String* get_BodyName();
		uint32_t get_Flags();
		static void _cctor();
	};
}

