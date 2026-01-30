#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::Authentication { struct Digest; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace System_Core::System::Threading { struct ReaderWriterLockSlim; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::BestHTTP::Authentication
{
	struct DigestStore : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::BestHTTP::Authentication::Digest>* Digests;
			System_Core::System::Threading::ReaderWriterLockSlim* rwLock;
			IL2CPP::Array<mscorlib::System::String*>* SupportedAlgorithms;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::Authentication::Digest* Get(System::System::Uri* uri);
		static Assembly_CSharp::BestHTTP::Authentication::Digest* GetOrCreate(System::System::Uri* uri);
		static void Remove(System::System::Uri* uri);
		static mscorlib::System::String* FindBest(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* authHeaders);
		static void _cctor();
	};
}

