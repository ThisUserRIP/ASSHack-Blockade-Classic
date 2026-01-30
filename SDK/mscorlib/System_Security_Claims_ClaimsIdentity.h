#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Security::Claims { struct Claim; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct Collection_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Principal { struct IIdentity; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace mscorlib::System::Security::Claims
{
	struct ClaimsIdentity : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* m_userSerializationData;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Security::Claims::Claim>* m_instanceClaims;
		mscorlib::System::Collections::ObjectModel::Collection_1<mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Security::Claims::Claim>>* m_externalClaims;
		mscorlib::System::String* m_nameType;
		mscorlib::System::String* m_roleType;
		mscorlib::System::String* m_version;
		mscorlib::System::Security::Claims::ClaimsIdentity* m_actor;
		mscorlib::System::String* m_authenticationType;
		mscorlib::System::Object* m_bootstrapContext;
		mscorlib::System::String* m_label;
		mscorlib::System::String* m_serializedNameType;
		mscorlib::System::String* m_serializedRoleType;
		mscorlib::System::String* m_serializedClaims;
		void _ctor();
		void _ctor(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Security::Claims::Claim>* claims);
		void _ctor(mscorlib::System::Security::Principal::IIdentity* identity, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Security::Claims::Claim>* claims, mscorlib::System::String* authenticationType, mscorlib::System::String* nameType, mscorlib::System::String* roleType);
		void _ctor(mscorlib::System::Security::Principal::IIdentity* identity, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Security::Claims::Claim>* claims, mscorlib::System::String* authenticationType, mscorlib::System::String* nameType, mscorlib::System::String* roleType, bool checkAuthType);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* get_AuthenticationType();
		mscorlib::System::Security::Claims::ClaimsIdentity* get_Actor();
		void set_Actor(mscorlib::System::Security::Claims::ClaimsIdentity* value);
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Security::Claims::Claim>* get_Claims();
		mscorlib::System::String* get_Name();
		mscorlib::System::Security::Claims::ClaimsIdentity* Clone();
		void SafeAddClaims(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Security::Claims::Claim>* claims);
		void SafeAddClaim(mscorlib::System::Security::Claims::Claim* claim);
		mscorlib::System::Security::Claims::Claim* FindFirst(mscorlib::System::String* type);
		void OnSerializingMethod(mscorlib::System::Runtime::Serialization::StreamingContext context);
		void OnDeserializedMethod(mscorlib::System::Runtime::Serialization::StreamingContext context);
		void OnDeserializingMethod(mscorlib::System::Runtime::Serialization::StreamingContext context);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void DeserializeClaims(mscorlib::System::String* serializedClaims);
		mscorlib::System::String* SerializeClaims();
		bool IsCircular(mscorlib::System::Security::Claims::ClaimsIdentity* subject);
		void Deserialize(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context, bool useContext);
	};
}

