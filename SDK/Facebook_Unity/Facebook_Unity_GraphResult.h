#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_ResultBase.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UnityWebRequestWWWModule::UnityEngine { struct WWW; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity
{
	struct GraphResult : Facebook_Unity::Facebook::Unity::ResultBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Object>* _ResultList_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Texture2D* _Texture_k__BackingField;
		void _ctor(UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* result);
		void set_ResultList(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Object>* value);
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_Texture();
		void set_Texture(UnityEngine_CoreModule::UnityEngine::Texture2D* value);
		void Init(mscorlib::System::String* rawResult);
	};
}

