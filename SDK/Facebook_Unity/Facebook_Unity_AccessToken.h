#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity
{
	struct AccessToken : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _TokenString_k__BackingField;
		mscorlib::System::DateTime _ExpirationTime_k__BackingField;
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* _Permissions_k__BackingField;
		mscorlib::System::String* _UserId_k__BackingField;
		mscorlib::System::Nullable_1<mscorlib::System::DateTime> _LastRefresh_k__BackingField;
		mscorlib::System::String* _GraphDomain_k__BackingField;
		struct StaticFields
		{
			Facebook_Unity::Facebook::Unity::AccessToken* _CurrentAccessToken_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* tokenString, mscorlib::System::String* userId, mscorlib::System::DateTime expirationTime, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, mscorlib::System::Nullable_1<mscorlib::System::DateTime> lastRefresh, mscorlib::System::String* graphDomain);
		static Facebook_Unity::Facebook::Unity::AccessToken* get_CurrentAccessToken();
		static void set_CurrentAccessToken(Facebook_Unity::Facebook::Unity::AccessToken* value);
		mscorlib::System::String* get_TokenString();
		void set_TokenString(mscorlib::System::String* value);
		mscorlib::System::DateTime get_ExpirationTime();
		void set_ExpirationTime(mscorlib::System::DateTime value);
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* get_Permissions();
		void set_Permissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* value);
		mscorlib::System::String* get_UserId();
		void set_UserId(mscorlib::System::String* value);
		mscorlib::System::Nullable_1<mscorlib::System::DateTime> get_LastRefresh();
		void set_LastRefresh(mscorlib::System::Nullable_1<mscorlib::System::DateTime> value);
		mscorlib::System::String* get_GraphDomain();
		void set_GraphDomain(mscorlib::System::String* value);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToJson();
	};
}

