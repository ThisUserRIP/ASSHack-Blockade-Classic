#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::Caching { struct HTTPCacheFileInfo; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace System_Core::System::Threading { struct ReaderWriterLockSlim; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
#include "BestHTTP_HTTPMethods.h"
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::Caching { struct HTTPCacheMaintananceParams; };

namespace Assembly_CSharp::BestHTTP::Caching
{
	struct HTTPCacheService : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t LibraryVersion;
			bool isSupported;
			bool IsSupportCheckDone;
			mscorlib::System::Collections::Generic::Dictionary_2<System::System::Uri, Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo>* library;
			System_Core::System::Threading::ReaderWriterLockSlim* rwLock;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt64, Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo>* UsedIndexes;
			mscorlib::System::String* _CacheFolder_k__BackingField;
			mscorlib::System::String* _LibraryPath_k__BackingField;
			bool InClearThread;
			bool InMaintainenceThread;
			uint64_t NextNameIDX;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_IsSupported();
		static mscorlib::System::String* get_CacheFolder();
		static void set_CacheFolder(mscorlib::System::String* value);
		static mscorlib::System::String* get_LibraryPath();
		static void set_LibraryPath(mscorlib::System::String* value);
		static bool get_IsDoingMaintainence();
		static void _cctor();
		static void CheckSetup();
		static void SetupCacheFolder();
		static uint64_t GetNameIdx();
		static bool HasEntity(System::System::Uri* uri);
		static bool DeleteEntity(System::System::Uri* uri, bool removeFromLibrary);
		static bool IsCachedEntityExpiresInTheFuture(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static void SetHeaders(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo* GetEntity(System::System::Uri* uri);
		static Assembly_CSharp::BestHTTP::HTTPResponse* GetFullResponse(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		static bool IsCacheble(System::System::Uri* uri, Assembly_CSharp::BestHTTP::HTTPMethods method, Assembly_CSharp::BestHTTP::HTTPResponse* response);
		static Assembly_CSharp::BestHTTP::Caching::HTTPCacheFileInfo* Store(System::System::Uri* uri, Assembly_CSharp::BestHTTP::HTTPMethods method, Assembly_CSharp::BestHTTP::HTTPResponse* response);
		static mscorlib::System::IO::Stream* PrepareStreamed(System::System::Uri* uri, Assembly_CSharp::BestHTTP::HTTPResponse* response);
		static void BeginClear();
		static void ClearImpl();
		static void BeginMaintainence(Assembly_CSharp::BestHTTP::Caching::HTTPCacheMaintananceParams* maintananceParam);
		static void MaintananceImpl(Assembly_CSharp::BestHTTP::Caching::HTTPCacheMaintananceParams* maintananceParam);
		static int32_t GetCacheEntityCount();
		static uint64_t GetCacheSize();
		static void LoadLibrary();
		static void SaveLibrary();
		static void SetBodyLength(System::System::Uri* uri, int32_t bodyLength);
		static void DeleteUnusedFiles();
	};
}

