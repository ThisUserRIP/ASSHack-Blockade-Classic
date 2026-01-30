#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };

namespace Assembly_CSharp
{
	struct MeshBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* uv;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* normals;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color>* colors;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>*>* indices;
		void AddVertices(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* vertices, UnityEngine_CoreModule::UnityEngine::Vector3 offset);
		void AddNormals(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* normals);
		void AddColor(UnityEngine_CoreModule::UnityEngine::Color color);
		void AddFaceColor(UnityEngine_CoreModule::UnityEngine::Color color);
		void AddColors(UnityEngine_CoreModule::UnityEngine::Color color, int32_t count);
		void AddTexCoords(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* uv);
		void AddFaceIndices(int32_t materialIndex);
		void AddIndices(int32_t materialIndex, IL2CPP::Array<int32_t>* indices);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* GetIndices(int32_t index);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color>* GetColors();
		void Clear();
		UnityEngine_CoreModule::UnityEngine::Mesh* ToMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		void _ctor();
	};
}

