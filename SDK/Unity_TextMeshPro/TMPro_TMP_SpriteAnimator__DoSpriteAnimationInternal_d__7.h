#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_SpriteAnimator.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAnimator; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
#include "TMPro_TMP_CharacterInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_CharacterInfo; };
#include "TMPro_TMP_MeshInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_MeshInfo; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SpriteAnimator__DoSpriteAnimationInternal_d__7 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Unity_TextMeshPro::TMPro::TMP_SpriteAnimator* __4__this;
		int32_t start;
		int32_t end;
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset;
		int32_t currentCharacter;
		int32_t framerate;
		int32_t _currentFrame_5__2;
		Unity_TextMeshPro::TMPro::TMP_CharacterInfo _charInfo_5__3;
		int32_t _materialIndex_5__4;
		int32_t _vertexIndex_5__5;
		Unity_TextMeshPro::TMPro::TMP_MeshInfo _meshInfo_5__6;
		float _baseSpriteScale_5__7;
		float _elapsedTime_5__8;
		float _targetTime_5__9;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

