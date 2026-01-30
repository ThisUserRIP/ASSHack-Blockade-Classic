#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_Types_NetworkID.h"
#include "UnityEngine_Networking_Types_NodeID.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfoSnapshot_MatchInfoDirectConnectSnapshot; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchDesc; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct MatchInfoSnapshot : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID _networkId_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID _hostNodeId_k__BackingField;
		mscorlib::System::String* _name_k__BackingField;
		int32_t _averageEloScore_k__BackingField;
		int32_t _maxSize_k__BackingField;
		int32_t _currentSize_k__BackingField;
		bool _isPrivate_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* _matchAttributes_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot>* _directConnectInfos_k__BackingField;
		UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID get_networkId();
		void set_networkId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID value);
		void set_hostNodeId(UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		void set_averageEloScore(int32_t value);
		void set_maxSize(int32_t value);
		void set_currentSize(int32_t value);
		void set_isPrivate(bool value);
		void set_matchAttributes(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot>* get_directConnectInfos();
		void set_directConnectInfos(mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot_MatchInfoDirectConnectSnapshot>* value);
		void _ctor(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchDesc* matchDesc);
	};
}

