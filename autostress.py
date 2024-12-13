import subprocess

def automate_stress_testing():
    try:
        # Execute the stress testing command
        subprocess.run(["./stress", "-b", "brute.cpp", "-m", "sol.cpp"], check=True)
        print("Stress testing executed successfully.")
    except subprocess.CalledProcessError as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    automate_stress_testing()