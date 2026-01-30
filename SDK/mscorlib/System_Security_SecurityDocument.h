#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security { struct SecurityElement; };

namespace mscorlib::System::Security
{
	struct SecurityDocument : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* m_data;
		void _ctor(int32_t numData);
		void GuaranteeSize(int32_t size);
		void AddString(mscorlib::System::String* str, int32_t& position);
		void AppendString(mscorlib::System::String* str, int32_t& position);
		static int32_t EncodedStringSize(mscorlib::System::String* str);
		mscorlib::System::String* GetString(int32_t& position, bool bCreate);
		void AddToken(uint8_t b, int32_t& position);
		mscorlib::System::Security::SecurityElement* GetRootElement();
		mscorlib::System::Security::SecurityElement* GetElement(int32_t position, bool bCreate);
		mscorlib::System::Security::SecurityElement* InternalGetElement(int32_t& position, bool bCreate);
	};
}

