#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace mscorlib::Mono::Security
{
	struct ASN1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t m_nTag;
		IL2CPP::Array<uint8_t>* m_aValue;
		mscorlib::System::Collections::ArrayList* elist;
		void _ctor(uint8_t tag);
		void _ctor(uint8_t tag, IL2CPP::Array<uint8_t>* data);
		void _ctor(IL2CPP::Array<uint8_t>* data);
		int32_t get_Count();
		uint8_t get_Tag();
		int32_t get_Length();
		IL2CPP::Array<uint8_t>* get_Value();
		void set_Value(IL2CPP::Array<uint8_t>* value);
		bool CompareArray(IL2CPP::Array<uint8_t>* array1, IL2CPP::Array<uint8_t>* array2);
		bool CompareValue(IL2CPP::Array<uint8_t>* value);
		mscorlib::Mono::Security::ASN1* Add(mscorlib::Mono::Security::ASN1* asn1);
		IL2CPP::Array<uint8_t>* GetBytes();
		void Decode(IL2CPP::Array<uint8_t>* asn1, int32_t& anPos, int32_t anLength);
		void DecodeTLV(IL2CPP::Array<uint8_t>* asn1, int32_t& pos, uint8_t& tag, int32_t& length, IL2CPP::Array<uint8_t>& content);
		mscorlib::Mono::Security::ASN1* get_Item(int32_t index);
		mscorlib::Mono::Security::ASN1* Element(int32_t index, uint8_t anTag);
		mscorlib::System::String* ToString();
	};
}

