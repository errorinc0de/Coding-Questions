// Author: @Nkzlxs

int *breakingRecords(int scores_count, int *scores, int *result_count)
{
    // Initialize an array for storing the amount of record broke
    int *answer = calloc(2, sizeof(int));

    // Keep a record of the all time lowest score
    int min_score = scores[0];

    // Keep a record of the all time highest score
    int max_score = scores[0];

    // Loop through every score provided in the hisotry
    for (int i = 1; i < scores_count; i++)
    {
        // If a score in the history has achieved the highest
        if (scores[i] > max_score)
        {
            // Update all time highest score
            max_score = scores[i];
            // Increase the number of time highest score has broken
            answer[0]++;
        }
        else if (scores[i] < min_score)
        {
            // Update all time lowest score
            min_score = scores[i];
            // Increase the number of time lowest score has broken
            answer[1]++;
        }
    }

    // Requested by the boilerplate code
    *result_count = 2;

    // Return to the boilerplate code to print out
    return answer;
}
