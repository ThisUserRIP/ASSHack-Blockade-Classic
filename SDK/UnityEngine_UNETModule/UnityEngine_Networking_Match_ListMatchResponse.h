#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_Match_BasicResponse.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchDesc; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct ListMatchResponse : UnityEngine_UNETModule::UnityEngine::Networking::Match::BasicResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchDesc>* matches;
		void _ctor();
		mscorlib::System::String* ToString();
	};
}

