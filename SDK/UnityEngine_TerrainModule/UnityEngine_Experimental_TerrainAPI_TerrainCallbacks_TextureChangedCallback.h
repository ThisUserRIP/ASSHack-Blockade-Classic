#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Experimental_TerrainAPI_TerrainCallbacks.h"
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainCallbacks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_TerrainModule::UnityEngine { struct Terrain; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_RectInt.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectInt; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI
{
	struct TerrainCallbacks_TextureChangedCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(UnityEngine_TerrainModule::UnityEngine::Terrain* terrain, mscorlib::System::String* textureName, UnityEngine_CoreModule::UnityEngine::RectInt texelRegion, bool synched);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_TerrainModule::UnityEngine::Terrain* terrain, mscorlib::System::String* textureName, UnityEngine_CoreModule::UnityEngine::RectInt texelRegion, bool synched, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

