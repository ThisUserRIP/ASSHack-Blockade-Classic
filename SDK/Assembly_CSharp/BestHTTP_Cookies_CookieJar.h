#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace Assembly_CSharp::BestHTTP::Cookies { struct Cookie; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
namespace System_Core::System::Threading { struct ReaderWriterLockSlim; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace System::System { struct Uri; };

namespace Assembly_CSharp::BestHTTP::Cookies
{
	struct CookieJar : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t Version;
			mscorlib::System::TimeSpan AccessThreshold;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Cookies::Cookie>* Cookies;
			mscorlib::System::String* _CookieFolder_k__BackingField;
			mscorlib::System::String* _LibraryPath_k__BackingField;
			System_Core::System::Threading::ReaderWriterLockSlim* rwLock;
			bool _isSavingSupported;
			bool IsSupportCheckDone;
			bool Loaded;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_IsSavingSupported();
		static mscorlib::System::String* get_CookieFolder();
		static void set_CookieFolder(mscorlib::System::String* value);
		static mscorlib::System::String* get_LibraryPath();
		static void set_LibraryPath(mscorlib::System::String* value);
		static void SetupFolder();
		static void Set(Assembly_CSharp::BestHTTP::HTTPResponse* response);
		static void Maintain();
		static void Persist();
		static void Load();
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Cookies::Cookie>* Get(System::System::Uri* uri);
		static void Set(System::System::Uri* uri, Assembly_CSharp::BestHTTP::Cookies::Cookie* cookie);
		static void Set(Assembly_CSharp::BestHTTP::Cookies::Cookie* cookie);
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Cookies::Cookie>* GetAll();
		static void Clear();
		static void Clear(mscorlib::System::TimeSpan olderThan);
		static void Clear(mscorlib::System::String* domain);
		static void Remove(System::System::Uri* uri, mscorlib::System::String* name);
		static Assembly_CSharp::BestHTTP::Cookies::Cookie* Find(Assembly_CSharp::BestHTTP::Cookies::Cookie* cookie, int32_t& idx);
		static void _cctor();
	};
}

