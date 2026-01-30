#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_Types_NetworkID.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking::Types { struct NetworkAccessToken; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "UnityEngine_Networking_Types_SourceID.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	struct Utility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken>* s_dictTokens;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID GetSourceID();
		static void SetAccessTokenForNetwork(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken* accessToken);
		static UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkAccessToken* GetAccessTokenForNetwork(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId);
		static void _cctor();
	};
}

