#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Security::Claims { struct ClaimsIdentity; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };

namespace mscorlib::System::Security::Claims
{
	struct Claim : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_issuer;
		mscorlib::System::String* m_originalIssuer;
		mscorlib::System::String* m_type;
		mscorlib::System::String* m_value;
		mscorlib::System::String* m_valueType;
		IL2CPP::Array<uint8_t>* m_userSerializationData;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* m_properties;
		mscorlib::System::Object* m_propertyLock;
		mscorlib::System::Security::Claims::ClaimsIdentity* m_subject;
		void _ctor(mscorlib::System::String* type, mscorlib::System::String* value, mscorlib::System::String* valueType, mscorlib::System::String* issuer, mscorlib::System::String* originalIssuer, mscorlib::System::Security::Claims::ClaimsIdentity* subject);
		void _ctor(mscorlib::System::String* type, mscorlib::System::String* value, mscorlib::System::String* valueType, mscorlib::System::String* issuer, mscorlib::System::String* originalIssuer, mscorlib::System::Security::Claims::ClaimsIdentity* subject, mscorlib::System::String* propertyKey, mscorlib::System::String* propertyValue);
		void _ctor(mscorlib::System::Security::Claims::Claim* other, mscorlib::System::Security::Claims::ClaimsIdentity* subject);
		void OnDeserializedMethod(mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* get_Properties();
		mscorlib::System::Security::Claims::ClaimsIdentity* get_Subject();
		void set_Subject(mscorlib::System::Security::Claims::ClaimsIdentity* value);
		mscorlib::System::String* get_Type();
		mscorlib::System::String* get_Value();
		mscorlib::System::Security::Claims::Claim* Clone(mscorlib::System::Security::Claims::ClaimsIdentity* identity);
		mscorlib::System::String* ToString();
	};
}

