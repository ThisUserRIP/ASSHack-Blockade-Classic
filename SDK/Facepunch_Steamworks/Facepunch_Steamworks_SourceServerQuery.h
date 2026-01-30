#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct ServerList_Server; };
namespace mscorlib::System::Threading { struct Thread; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct SourceServerQuery : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool IsRunning;
		bool IsSuccessful;
		Facepunch_Steamworks::Facepunch::Steamworks::ServerList_Server* Server;
		mscorlib::System::Threading::Thread* thread;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* rules;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::Facepunch::Steamworks::SourceServerQuery>* Current;
			IL2CPP::Array<uint8_t>* A2S_SERVERQUERY_GETCHALLENGE;
			uint8_t A2S_RULES;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Cycle();
		void Update();
		void Dispose();
		static void _cctor();
	};
}

