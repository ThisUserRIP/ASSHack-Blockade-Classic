#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System { struct Uri; };
#include "BestHTTP_Authentication_AuthenticationTypes.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP::Authentication { struct Credentials; };

namespace Assembly_CSharp::BestHTTP::Authentication
{
	struct Digest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* _Uri_k__BackingField;
		Assembly_CSharp::BestHTTP::Authentication::AuthenticationTypes _Type_k__BackingField;
		mscorlib::System::String* _Realm_k__BackingField;
		bool _Stale_k__BackingField;
		mscorlib::System::String* _Nonce_k__BackingField;
		mscorlib::System::String* _Opaque_k__BackingField;
		mscorlib::System::String* _Algorithm_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _ProtectedUris_k__BackingField;
		mscorlib::System::String* _QualityOfProtections_k__BackingField;
		int32_t _NonceCount_k__BackingField;
		mscorlib::System::String* _HA1Sess_k__BackingField;
		System::System::Uri* get_Uri();
		void set_Uri(System::System::Uri* value);
		Assembly_CSharp::BestHTTP::Authentication::AuthenticationTypes get_Type();
		void set_Type(Assembly_CSharp::BestHTTP::Authentication::AuthenticationTypes value);
		mscorlib::System::String* get_Realm();
		void set_Realm(mscorlib::System::String* value);
		bool get_Stale();
		void set_Stale(bool value);
		mscorlib::System::String* get_Nonce();
		void set_Nonce(mscorlib::System::String* value);
		mscorlib::System::String* get_Opaque();
		void set_Opaque(mscorlib::System::String* value);
		mscorlib::System::String* get_Algorithm();
		void set_Algorithm(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_ProtectedUris();
		void set_ProtectedUris(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		mscorlib::System::String* get_QualityOfProtections();
		void set_QualityOfProtections(mscorlib::System::String* value);
		int32_t get_NonceCount();
		void set_NonceCount(int32_t value);
		mscorlib::System::String* get_HA1Sess();
		void set_HA1Sess(mscorlib::System::String* value);
		void _ctor(System::System::Uri* uri);
		void ParseChallange(mscorlib::System::String* header);
		mscorlib::System::String* GenerateResponseHeader(Assembly_CSharp::BestHTTP::HTTPRequest* request, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials, bool isProxy);
		bool IsUriProtected(System::System::Uri* uri);
	};
}

