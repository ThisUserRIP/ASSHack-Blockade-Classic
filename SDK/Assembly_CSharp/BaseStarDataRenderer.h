#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct BaseStarDataRenderer_StarDataProgress; };
namespace Assembly_CSharp { struct BaseStarDataRenderer_StarDataComplete; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };

namespace Assembly_CSharp
{
	struct BaseStarDataRenderer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BaseStarDataRenderer_StarDataProgress* progressCallback;
		Assembly_CSharp::BaseStarDataRenderer_StarDataComplete* completionCallback;
		float density;
		float imageSize;
		mscorlib::System::String* layerId;
		float maxRadius;
		float sphereRadius;
		bool isCancelled;
		void add_progressCallback(Assembly_CSharp::BaseStarDataRenderer_StarDataProgress* value);
		void remove_progressCallback(Assembly_CSharp::BaseStarDataRenderer_StarDataProgress* value);
		void add_completionCallback(Assembly_CSharp::BaseStarDataRenderer_StarDataComplete* value);
		void remove_completionCallback(Assembly_CSharp::BaseStarDataRenderer_StarDataComplete* value);
		mscorlib::System::Collections::IEnumerator* ComputeStarData();
		void Cancel();
		void SendProgress(float progress);
		void SendCompletion(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, bool success);
		void _ctor();
	};
}

