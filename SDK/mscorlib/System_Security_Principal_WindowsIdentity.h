#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Claims_ClaimsIdentity.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "System_Security_Principal_WindowsAccountType.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Security::Principal { struct WindowsImpersonationContext; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Security::Principal
{
	struct WindowsIdentity : mscorlib::System::Security::Claims::ClaimsIdentity
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _token;
		mscorlib::System::String* _type;
		mscorlib::System::Security::Principal::WindowsAccountType _account;
		bool _authenticated;
		mscorlib::System::String* _name;
		mscorlib::System::Runtime::Serialization::SerializationInfo* _info;
		struct StaticFields
		{
			intptr_t invalidWindows;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(intptr_t userToken, mscorlib::System::String* type, mscorlib::System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void Dispose();
		static mscorlib::System::Security::Principal::WindowsIdentity* GetCurrent();
		mscorlib::System::Security::Principal::WindowsImpersonationContext* Impersonate();
		mscorlib::System::String* get_AuthenticationType();
		mscorlib::System::String* get_Name();
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void SetToken(intptr_t token);
		static intptr_t GetCurrentToken();
		static mscorlib::System::String* GetTokenName(intptr_t token);
		static void _cctor();
	};
}

