#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct GL : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Vertex3(float x, float y, float z);
		static void TexCoord3(float x, float y, float z);
		static void TexCoord2(float x, float y);
		static void MultiTexCoord3(int32_t unit, float x, float y, float z);
		static void MultiTexCoord2(int32_t unit, float x, float y);
		static void ImmediateColor(float r, float g, float b, float a);
		static void Color(UnityEngine_CoreModule::UnityEngine::Color c);
		static bool get_wireframe();
		static void PushMatrix();
		static void PopMatrix();
		static void LoadIdentity();
		static void LoadOrtho();
		static void LoadProjectionMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 mat);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, bool renderIntoTexture);
		static void Begin(int32_t mode);
		static void End();
		static void GLClear(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color backgroundColor, float depth);
		static void Clear(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color backgroundColor);
		static void ClearWithSkybox(bool clearDepth, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void LoadProjectionMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& mat);
		static void GetGPUProjectionMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& proj, bool renderIntoTexture, UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		static void GLClear_Injected(bool clearDepth, bool clearColor, UnityEngine_CoreModule::UnityEngine::Color& backgroundColor, float depth);
	};
}

