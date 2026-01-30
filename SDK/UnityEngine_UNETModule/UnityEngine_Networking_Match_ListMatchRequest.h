#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_Match_Request.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct ListMatchRequest : UnityEngine_UNETModule::UnityEngine::Networking::Match::Request
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _pageSize_k__BackingField;
		int32_t _pageNum_k__BackingField;
		mscorlib::System::String* _nameFilter_k__BackingField;
		bool _filterOutPrivateMatches_k__BackingField;
		int32_t _eloScore_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* _matchAttributeFilterLessThan_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* _matchAttributeFilterEqualTo_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* _matchAttributeFilterGreaterThan_k__BackingField;
		int32_t get_pageSize();
		void set_pageSize(int32_t value);
		int32_t get_pageNum();
		void set_pageNum(int32_t value);
		mscorlib::System::String* get_nameFilter();
		void set_nameFilter(mscorlib::System::String* value);
		bool get_filterOutPrivateMatches();
		void set_filterOutPrivateMatches(bool value);
		int32_t get_eloScore();
		void set_eloScore(int32_t value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* get_matchAttributeFilterLessThan();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* get_matchAttributeFilterEqualTo();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int64>* get_matchAttributeFilterGreaterThan();
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

